/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/Versions/A/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSSet, VSAuditToken, VSOptional, NSOperationQueue;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {

	char _needsProductProfile;
	char _shouldPersonalizeResponse;
	char _shouldPrecomposeIcon;
	NSSet* _appAdamIDs;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _imageLoadingQueue;
	CGSize _preferredArtworkSize;

}

@property (nonatomic,copy) NSSet * appAdamIDs;                                  //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (assign,nonatomic) CGSize preferredArtworkSize;                       //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
@property (nonatomic,retain) VSOptional * result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (assign,nonatomic) char needsProductProfile;                          //@synthesize needsProductProfile=_needsProductProfile - In the implementation block
@property (assign,nonatomic) char shouldPersonalizeResponse;                    //@synthesize shouldPersonalizeResponse=_shouldPersonalizeResponse - In the implementation block
@property (assign,nonatomic) char shouldPrecomposeIcon;                         //@synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)cancel;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(void)executionDidBegin;
-(NSSet *)appAdamIDs;
-(void)setAppAdamIDs:(NSSet *)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 ;
-(NSOperationQueue *)imageLoadingQueue;
-(id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(CGSize)arg2 ;
-(char)needsProductProfile;
-(void)setNeedsProductProfile:(char)arg1 ;
-(char)shouldPersonalizeResponse;
-(void)setShouldPersonalizeResponse:(char)arg1 ;
-(char)shouldPrecomposeIcon;
-(void)setShouldPrecomposeIcon:(char)arg1 ;
-(void)setImageLoadingQueue:(NSOperationQueue *)arg1 ;
@end

