/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface _DKSyncToggle : NSObject {

	char _enabled;
	NSObject* _object;
	NSString* _name;
	SEL _enableSelector;
	SEL _disableSelector;

}
-(void)dealloc;
-(void)_setEnabled:(char)arg1 ;
-(id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4 ;
@end

