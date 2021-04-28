/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/Versions/A/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface NUISizeCache : NSObject {

	nui_size_cache* _sizeCache;
	char _threadSafe;

}
-(void)dealloc;
-(void)invalidateCache;
-(id)initForAsynchronousAccess:(char)arg1 ;
-(char)getSize:(CGSize*)arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(char)arg3 ;
-(void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2 ;
@end
