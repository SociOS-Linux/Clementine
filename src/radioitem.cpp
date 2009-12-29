#include "radioitem.h"
#include "radioservice.h"

RadioItem::RadioItem(RadioService* _service, int type, const QString& key,
                     RadioItem* parent)
  : SimpleTreeItem<RadioItem>(type, key, parent),
    service(_service),
    playable(false)
{
}

QUrl RadioItem::Url() const {
  return service->UrlForItem(this);
}

QString RadioItem::Title() const {
  return service->TitleForItem(this);
}
