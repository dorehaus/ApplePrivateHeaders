/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSResponseMessageType, EWSFreeBusyView, NSString;

@interface EWSFreeBusyResponseType : NSObject <XSDefinitionProvider> {

	EWSResponseMessageType* _ResponseMessage;
	EWSFreeBusyView* _FreeBusyView;

}

@property (nonatomic,retain) EWSResponseMessageType * ResponseMessage;              //@synthesize ResponseMessage=_ResponseMessage - In the implementation block
@property (nonatomic,retain) EWSFreeBusyView * FreeBusyView;                        //@synthesize FreeBusyView=_FreeBusyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(EWSFreeBusyView *)FreeBusyView;
-(EWSResponseMessageType *)ResponseMessage;
-(void)setResponseMessage:(EWSResponseMessageType *)arg1 ;
-(void)setFreeBusyView:(EWSFreeBusyView *)arg1 ;
@end

