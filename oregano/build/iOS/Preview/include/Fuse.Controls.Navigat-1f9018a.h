// This file was generated based on '/Users/coder/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Navigator.NavPage :1380
// {
uType* Navigator__NavPage_typeof();
void Navigator__NavPage__ctor__fn(Navigator__NavPage* __this);
void Navigator__NavPage__CopyFrom_fn(Navigator__NavPage* __this, Navigator__NavPage* o);
void Navigator__NavPage__New1_fn(Navigator__NavPage** __retval);
void Navigator__NavPage__Reset_fn(Navigator__NavPage* __this);

struct Navigator__NavPage : uObject
{
    uStrong<uString*> Parameter;
    uStrong<uString*> Path;
    uStrong< ::g::Fuse::Visual*> Visual;

    void ctor_();
    void CopyFrom(Navigator__NavPage* o);
    void Reset();
    static Navigator__NavPage* New1();
};
// }

}}} // ::g::Fuse::Controls
