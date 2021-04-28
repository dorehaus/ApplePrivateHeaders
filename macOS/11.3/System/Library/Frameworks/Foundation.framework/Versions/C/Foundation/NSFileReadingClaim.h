/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {

	NSURL* _url;
	char _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;
	NSFileAccessNode* _rootNode;
	long long _linkResolutionCount;

}
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)shouldBeRevokedPriorToInvokingAccessor;
-(void)protectFilesAgainstEviction;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(char)shouldCancelInsteadOfWaiting;
-(char)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)resolveURLThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
@end

