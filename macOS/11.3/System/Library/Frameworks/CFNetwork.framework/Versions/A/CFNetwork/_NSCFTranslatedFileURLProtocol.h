/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {

	const CFURLProtocolInstanceCallbacks* _callbacks;
	CFURLProtocolClient* _cfurlClient;
	const void* _info;

}
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(const CFURLProtocolImplementation*)pimpl;
-(void)dealloc;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end

