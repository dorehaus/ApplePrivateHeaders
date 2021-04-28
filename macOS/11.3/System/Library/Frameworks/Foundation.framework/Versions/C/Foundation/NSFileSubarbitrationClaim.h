/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSXPCConnection, NSFileAccessNode, NSMutableSet, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

	NSArray* _readingURLs;
	unsigned long long _readingOptions;
	NSArray* _writingURLs;
	unsigned long long _writingOptions;
	NSXPCConnection* _subarbiterConnection;
	NSArray* _readingLocations;
	NSArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	NSMutableSet* _forwardedClaimIDs;
	NSMutableDictionary* _readRelinquishmentsByPresenterID;
	NSMutableDictionary* _writeRelinquishmentsByPresenterID;
	char _nullified;

}

@property (readonly) char nullified;                                    //@synthesize nullified=_nullified - In the implementation block
@property (retain) NSXPCConnection * subarbiterConnection;              //@synthesize subarbiterConnection=_subarbiterConnection - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(/*^block*/id)arg5 ;
-(void)granted;
-(void)invokeClaimer;
-(void)devalueSelf;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)revoked;
-(void)devalueOldClaim:(id)arg1 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)setSubarbiterConnection:(NSXPCConnection *)arg1 ;
-(char)nullified;
-(NSXPCConnection *)subarbiterConnection;
-(void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(/*^block*/id)arg3 ;
-(void)forwardRelinquishmentForWritingClaim:(char)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(/*^block*/id)arg7 ;
-(void)forwardReacquisitionForWritingClaim:(char)arg1 withID:(n@)arg2 toPresenterForID:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(id)relinquishmentForWrite:(char)arg1 toPresenterForID:(id)arg2 ;
@end

