/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/_LSRecordEnumerator.h>

@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {

	NSURL* _volumeURL;
	unsigned long long _options;
	vector<unsigned int, std::__1::allocator<unsigned int>>* _bundleIdentifiersOrUnits;
	unsigned _container;
	unsigned _bundleClass;

}

@property (assign) unsigned bundleClass;              //@synthesize bundleClass=_bundleClass - In the implementation block
-(unsigned)bundleClass;
-(char)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(char)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
-(char)_getContainer:(unsigned*)arg1 context:(LSContext*)arg2 error:(id*)arg3 ;
-(id)_applicationRecordWithContext:(LSContext*)arg1 bundleIdentifierOrUnit:(unsigned)arg2 ;
-(id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setBundleClass:(unsigned)arg1 ;
-(char)_evaluateBundleNoIO:(unsigned)arg1 data:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
@end
