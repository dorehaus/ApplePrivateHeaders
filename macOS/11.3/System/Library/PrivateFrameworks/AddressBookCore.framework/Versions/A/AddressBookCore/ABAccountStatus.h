/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookCore/AddressBookCore-Structs.h>
@interface ABAccountStatus : NSObject {

	id _target;
	SEL _action;
	unsigned long long _state;
	CGRect _frameForAccessoryViews;

}

@property (readonly) CGRect frameForAccessoryViews;              //@synthesize frameForAccessoryViews=_frameForAccessoryViews - In the implementation block
@property (readonly) id target;                                  //@synthesize target=_target - In the implementation block
@property (readonly) SEL action;                                 //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
+(id)noStatus;
+(id)networkActivityStatus;
+(id)offlineStatusWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)alertStatusWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)authenticationFailedStatusWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)state;
-(id)target;
-(SEL)action;
-(id)initWithState:(unsigned long long)arg1 ;
-(CGRect)frameForAccessoryViews;
@end

