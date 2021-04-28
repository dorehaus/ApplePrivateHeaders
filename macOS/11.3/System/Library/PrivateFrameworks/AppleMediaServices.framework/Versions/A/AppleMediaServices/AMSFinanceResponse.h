/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSFinanceAuthenticateResponse, AMSFinanceDialogResponse, AMSFinancePaymentSheetResponse, NSDictionary, AMSURLTaskInfo, ACAccount, NSArray, NSError, NSURL;

@interface AMSFinanceResponse : NSObject {

	AMSFinanceAuthenticateResponse* _cachedAuthenticateResponse;
	AMSFinanceDialogResponse* _cachedDialogResponse;
	AMSFinancePaymentSheetResponse* _cachedPaymentSheetResponse;
	long long _dialogKind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (retain) AMSFinanceAuthenticateResponse * cachedAuthenticateResponse;              //@synthesize cachedAuthenticateResponse=_cachedAuthenticateResponse - In the implementation block
@property (retain) AMSFinanceDialogResponse * cachedDialogResponse;                          //@synthesize cachedDialogResponse=_cachedDialogResponse - In the implementation block
@property (retain) AMSFinancePaymentSheetResponse * cachedPaymentSheetResponse;              //@synthesize cachedPaymentSheetResponse=_cachedPaymentSheetResponse - In the implementation block
@property (readonly) long long dialogKind;                                                   //@synthesize dialogKind=_dialogKind - In the implementation block
@property (retain) NSDictionary * responseDictionary;                                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (retain) AMSURLTaskInfo * taskInfo;                                                //@synthesize taskInfo=_taskInfo - In the implementation block
@property (readonly) ACAccount * account; 
@property (readonly) NSArray * actions; 
@property (readonly) NSArray * pingURLs; 
@property (readonly) NSError * serverError; 
@property (readonly) char supportedProtocolVersion; 
@property (readonly) NSURL * versionMismatchURL; 
+(id)valueForProtocolKey:(id)arg1 inResponse:(id)arg2 ;
-(ACAccount *)account;
-(NSArray *)actions;
-(NSDictionary *)responseDictionary;
-(AMSURLTaskInfo *)taskInfo;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)_valueForProtocolKey:(id)arg1 ;
-(long long)dialogKind;
-(id)_performerForAuthenticate;
-(id)_performerForDialog;
-(id)_performerForPaymentSheet;
-(id)_performerForActionDictionary;
-(id)_performerForCreditDisplay;
-(AMSFinanceAuthenticateResponse *)cachedAuthenticateResponse;
-(void)setCachedAuthenticateResponse:(AMSFinanceAuthenticateResponse *)arg1 ;
-(AMSFinanceDialogResponse *)cachedDialogResponse;
-(void)setCachedDialogResponse:(AMSFinanceDialogResponse *)arg1 ;
-(AMSFinancePaymentSheetResponse *)cachedPaymentSheetResponse;
-(void)setCachedPaymentSheetResponse:(AMSFinancePaymentSheetResponse *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(NSArray *)pingURLs;
-(NSError *)serverError;
-(char)supportedProtocolVersion;
-(NSURL *)versionMismatchURL;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
@end
