/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCAccessChecker.h>

@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker {

	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id)init;
-(char)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id)initWithPrivateChannelMembershipController:(id)arg1 ;
@end

