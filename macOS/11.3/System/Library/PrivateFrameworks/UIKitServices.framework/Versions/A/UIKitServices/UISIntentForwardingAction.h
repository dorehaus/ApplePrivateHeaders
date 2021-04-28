/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class INIntent, INIntentForwardingAction;

@interface UISIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;
	INIntentForwardingAction* _cachedIntentForwardingAction;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction; 
-(INIntent *)intent;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentForwardingAction *)intentForwardingAction;
-(long long)UIActionType;
-(id)initWithIntentForwardingAction:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
