/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject {

	NSString* _bundleIdentifier;
	_MXVersion* _minimum;
	_MXVersion* _maximum;

}
+(id)blacklistEntriesFromDefaultsValue:(id)arg1 ;
-(char)_isVersionValueAllowed:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3 ;
-(char)isBundleProxyAllowed:(id)arg1 ;
-(char)isExtensionAllowed:(id)arg1 ;
@end

