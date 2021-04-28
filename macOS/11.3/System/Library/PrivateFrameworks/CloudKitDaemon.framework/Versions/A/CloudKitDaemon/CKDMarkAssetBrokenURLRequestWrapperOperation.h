/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation {

	CKDMarkAssetBrokenURLRequest* _urlRequest;

}

@property (nonatomic,retain) CKDMarkAssetBrokenURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(int)operationType;
-(void)main;
-(id)activityCreate;
-(CKDMarkAssetBrokenURLRequest *)urlRequest;
-(void)setUrlRequest:(CKDMarkAssetBrokenURLRequest *)arg1 ;
-(char)shouldCheckAppVersion;
@end

