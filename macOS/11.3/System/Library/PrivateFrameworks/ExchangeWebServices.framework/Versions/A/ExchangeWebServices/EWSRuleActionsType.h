/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSArray, EWSTargetFolderIdType, EWSItemIdType, NSString;

@interface EWSRuleActionsType : NSObject <XSDefinitionProvider> {

	char _Delete;
	char _MarkAsRead;
	char _PermanentDelete;
	char _StopProcessingRules;
	NSArray* _AssignCategories;
	EWSTargetFolderIdType* _CopyToFolder;
	NSArray* _ForwardAsAttachmentToRecipients;
	NSArray* _ForwardToRecipients;
	long long _MarkImportance;
	EWSTargetFolderIdType* _MoveToFolder;
	NSArray* _RedirectToRecipients;
	NSArray* _SendSMSAlertToRecipients;
	EWSItemIdType* _ServerReplyWithMessage;

}

@property (nonatomic,copy) NSArray * AssignCategories;                                                         //@synthesize AssignCategories=_AssignCategories - In the implementation block
@property (nonatomic,retain) EWSTargetFolderIdType * CopyToFolder;                                             //@synthesize CopyToFolder=_CopyToFolder - In the implementation block
@property (assign,nonatomic) char Delete;                                                                      //@synthesize Delete=_Delete - In the implementation block
@property (nonatomic,copy) NSArray * ForwardAsAttachmentToRecipients;                                          //@synthesize ForwardAsAttachmentToRecipients=_ForwardAsAttachmentToRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ForwardToRecipients;                                                      //@synthesize ForwardToRecipients=_ForwardToRecipients - In the implementation block
@property (assign,nonatomic) long long MarkImportance;                                                         //@synthesize MarkImportance=_MarkImportance - In the implementation block
@property (assign,nonatomic) char MarkAsRead;                                                                  //@synthesize MarkAsRead=_MarkAsRead - In the implementation block
@property (nonatomic,retain) EWSTargetFolderIdType * MoveToFolder;                                             //@synthesize MoveToFolder=_MoveToFolder - In the implementation block
@property (assign,nonatomic) char PermanentDelete;                                                             //@synthesize PermanentDelete=_PermanentDelete - In the implementation block
@property (nonatomic,copy) NSArray * RedirectToRecipients;                                                     //@synthesize RedirectToRecipients=_RedirectToRecipients - In the implementation block
@property (setter=endSMSAlertToRecipients,nonatomic,copy) NSArray * SendSMSAlertToRecipients;                  //@synthesize SendSMSAlertToRecipients=_SendSMSAlertToRecipients - In the implementation block
@property (setter=erverReplyWithMessage,nonatomic,retain) EWSItemIdType * ServerReplyWithMessage;              //@synthesize ServerReplyWithMessage=_ServerReplyWithMessage - In the implementation block
@property (assign,setter=topProcessingRules,nonatomic) char StopProcessingRules;                               //@synthesize StopProcessingRules=_StopProcessingRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(char)Delete;
-(void)setDelete:(char)arg1 ;
-(NSArray *)AssignCategories;
-(void)setAssignCategories:(NSArray *)arg1 ;
-(EWSTargetFolderIdType *)CopyToFolder;
-(void)setCopyToFolder:(EWSTargetFolderIdType *)arg1 ;
-(NSArray *)ForwardAsAttachmentToRecipients;
-(void)setForwardAsAttachmentToRecipients:(NSArray *)arg1 ;
-(NSArray *)ForwardToRecipients;
-(void)setForwardToRecipients:(NSArray *)arg1 ;
-(long long)MarkImportance;
-(void)setMarkImportance:(long long)arg1 ;
-(char)MarkAsRead;
-(void)setMarkAsRead:(char)arg1 ;
-(EWSTargetFolderIdType *)MoveToFolder;
-(void)setMoveToFolder:(EWSTargetFolderIdType *)arg1 ;
-(char)PermanentDelete;
-(void)setPermanentDelete:(char)arg1 ;
-(NSArray *)RedirectToRecipients;
-(void)setRedirectToRecipients:(NSArray *)arg1 ;
-(NSArray *)SendSMSAlertToRecipients;
-(void)setSendSMSAlertToRecipients:(NSArray *)arg1 ;
-(EWSItemIdType *)ServerReplyWithMessage;
-(void)setServerReplyWithMessage:(EWSItemIdType *)arg1 ;
-(char)StopProcessingRules;
-(void)setStopProcessingRules:(char)arg1 ;
@end
