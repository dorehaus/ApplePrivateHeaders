/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSMutableSet, SSPurchaseManager, NSString;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {

	char _isBackgroundRequest;
	NSArray* _purchases;
	char _shouldValidatePurchases;
	/*^block*/id _completionBlock;
	char _createsDownloads;
	NSMutableSet* _openPurchaseIdentifiers;
	/*^block*/id _purchaseBlock;
	/*^block*/id _purchaseResponseBlock;
	SSPurchaseManager* _purchaseManager;
	char _needsAuthentication;
	char _playbackRequest;
	char _createsJobs;

}

@property (assign,nonatomic) char createsDownloads;                                          //@synthesize createsDownloads=_createsDownloads - In the implementation block
@property (assign,nonatomic) char createsJobs;                                               //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,getter=isPlaybackRequest,nonatomic) char playbackRequest;                  //@synthesize playbackRequest=_playbackRequest - In the implementation block
@property (assign,nonatomic) char shouldValidatePurchases;                                   //@synthesize shouldValidatePurchases=_shouldValidatePurchases - In the implementation block
@property (assign,nonatomic) id<SSPurchaseRequestDelegate> delegate; 
@property (readonly) NSArray * purchases; 
@property (assign,getter=isBackgroundRequest,nonatomic) char backgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
@property (assign,nonatomic) char needsAuthentication;                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)start;
-(void)cancel;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(NSArray *)purchases;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(char)isPlaybackRequest;
-(void)setPlaybackRequest:(char)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)createsJobs;
-(void)setCreatesJobs:(char)arg1 ;
-(id)initWithPurchases:(id)arg1 ;
-(void)_addPurchasesToManager;
-(void)_finishPurchasesWithResponses:(id)arg1 ;
-(void)setCreatesDownloads:(char)arg1 ;
-(id)_purchaseForUniqueIdentifier:(long long)arg1 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(void)startWithPurchaseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startWithPurchaseResponseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)isBackgroundRequest;
-(void)setBackgroundRequest:(char)arg1 ;
-(char)createsDownloads;
-(char)shouldValidatePurchases;
-(void)setShouldValidatePurchases:(char)arg1 ;
@end

