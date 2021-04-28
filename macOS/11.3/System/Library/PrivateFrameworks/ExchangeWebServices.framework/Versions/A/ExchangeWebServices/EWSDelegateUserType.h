/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSUserIdType, EWSDelegatePermissionsType, NSString;

@interface EWSDelegateUserType : NSObject <XSDefinitionProvider> {

	char _ReceiveCopiesOfMeetingMessages;
	char _ViewPrivateItems;
	EWSUserIdType* _UserId;
	EWSDelegatePermissionsType* _DelegatePermissions;

}

@property (nonatomic,retain) EWSUserIdType * UserId;                                        //@synthesize UserId=_UserId - In the implementation block
@property (nonatomic,retain) EWSDelegatePermissionsType * DelegatePermissions;              //@synthesize DelegatePermissions=_DelegatePermissions - In the implementation block
@property (assign,nonatomic) char ReceiveCopiesOfMeetingMessages;                           //@synthesize ReceiveCopiesOfMeetingMessages=_ReceiveCopiesOfMeetingMessages - In the implementation block
@property (assign,nonatomic) char ViewPrivateItems;                                         //@synthesize ViewPrivateItems=_ViewPrivateItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setUserId:(EWSUserIdType *)arg1 ;
-(void)setDelegatePermissions:(EWSDelegatePermissionsType *)arg1 ;
-(EWSUserIdType *)UserId;
-(EWSDelegatePermissionsType *)DelegatePermissions;
-(void)setReceiveCopiesOfMeetingMessages:(char)arg1 ;
-(char)ReceiveCopiesOfMeetingMessages;
-(char)ViewPrivateItems;
-(void)setViewPrivateItems:(char)arg1 ;
@end

