/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHResourceRequest.h>

@protocol PLResourceIdentity;
@interface PHMakeResourceAvailableRequest : PHResourceRequest {

	char _transient;
	char _networkAccessAllowed;
	id<PLResourceIdentity> _resourceIdentity;
	long long _downloadIntent;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;                            //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
@property (assign,getter=isTransient,nonatomic) char transient;                                    //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) char networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isTransient;
-(void)setTransient:(char)arg1 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resource:(id)arg3 ;
-(id<PLResourceIdentity>)resourceIdentity;
-(char)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(char)arg1 ;
-(long long)downloadIntent;
-(void)setDownloadIntent:(long long)arg1 ;
@end
