/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol FBSApplicationTrustDataProvider;
@class FBSSignatureValidationService, NSString;

@interface FBSApplicationTrustFacade : NSObject <FBSApplicationTrustDataProvider> {

	id<FBSApplicationTrustDataProvider> _legacyProvider;
	id<FBSApplicationTrustDataProvider> _modernProvider;
	FBSSignatureValidationService* _authoritativeProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)trustStateForApplication:(id)arg1 ;
@end
