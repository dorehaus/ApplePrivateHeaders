/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class NSDictionary, AMSDialogRequest, AMSURLTaskInfo, NSString;

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable> {

	char _containsCommerceUIURL;
	NSDictionary* _dialogDictionary;
	AMSDialogRequest* _dialogRequest;
	long long _kind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (readonly) char containsCommerceUIURL;                          //@synthesize containsCommerceUIURL=_containsCommerceUIURL - In the implementation block
@property (copy,readonly) NSDictionary * dialogDictionary;                //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (assign) long long kind;                                        //@synthesize kind=_kind - In the implementation block
@property (copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (copy) AMSURLTaskInfo * taskInfo;                               //@synthesize taskInfo=_taskInfo - In the implementation block
@property (readonly) AMSDialogRequest * dialogRequest;                    //@synthesize dialogRequest=_dialogRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handleDialogResult:(id)arg1 taskInfo:(id)arg2 ;
+(id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2 ;
+(char)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2 ;
+(id)_presentEngagementForResult:(id)arg1 taskInfo:(id)arg2 ;
+(id)_updatedDialogResultFromResult:(id)arg1 engagementResult:(id)arg2 error:(id)arg3 ;
+(char)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2 ;
+(id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2 ;
+(id)_presentDialog:(id)arg1 taskInfo:(id)arg2 ;
+(long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(NSDictionary *)responseDictionary;
-(AMSDialogRequest *)dialogRequest;
-(AMSURLTaskInfo *)taskInfo;
-(id)performWithTaskInfo:(id)arg1 ;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3 ;
-(NSDictionary *)dialogDictionary;
-(id)_createDialogRequest;
-(long long)_actionTypeFromButtonDictionary:(id)arg1 ;
-(char)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3 ;
-(id)_URLForCommerceUIFromURL:(id)arg1 tidContinue:(char)arg2 ;
-(id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1 ;
-(id)_createRequestButtonsFromDialogDictionary:(id)arg1 ;
-(id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2 ;
-(char)containsCommerceUIURL;
@end

