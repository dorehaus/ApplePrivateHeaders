/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class EWSFindItemParentType;

@interface EWSFindItemResponseMessageType : EWSResponseMessageType {

	EWSFindItemParentType* _RootFolder;

}

@property (nonatomic,retain) EWSFindItemParentType * RootFolder;              //@synthesize RootFolder=_RootFolder - In the implementation block
+(id)definition;
-(EWSFindItemParentType *)RootFolder;
-(void)setRootFolder:(EWSFindItemParentType *)arg1 ;
@end

