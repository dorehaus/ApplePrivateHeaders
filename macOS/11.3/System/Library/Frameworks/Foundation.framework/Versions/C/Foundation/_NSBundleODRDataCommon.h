/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(char)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(char)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
@end
