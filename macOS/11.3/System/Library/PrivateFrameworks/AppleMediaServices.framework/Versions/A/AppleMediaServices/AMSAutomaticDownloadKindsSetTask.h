/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, AMSRequestPresentationDelegate;
@class ACAccount, NSArray, AMSURLSession, NSString;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSArray* _enabledMediaKinds;
	id<AMSRequestPresentationDelegate> _presentationDelegate;
	AMSURLSession* _session;

}

@property (retain) AMSURLSession * session;                                                       //@synthesize session=_session - In the implementation block
@property (readonly) ACAccount * account;                                                         //@synthesize account=_account - In the implementation block
@property (readonly) id<AMSBagProtocol> bag;                                                      //@synthesize bag=_bag - In the implementation block
@property (readonly) NSArray * enabledMediaKinds;                                                 //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
@property (__weak,readonly) id<AMSRequestPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)perform;
-(AMSURLSession *)session;
-(ACAccount *)account;
-(void)setSession:(AMSURLSession *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)enabledMediaKinds;
-(id<AMSRequestPresentationDelegate>)presentationDelegate;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 presentationDelegate:(id)arg4 ;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
@end

