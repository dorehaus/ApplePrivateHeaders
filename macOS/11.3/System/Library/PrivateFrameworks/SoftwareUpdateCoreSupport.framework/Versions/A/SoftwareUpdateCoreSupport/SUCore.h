/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/Versions/A/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SUCore : NSObject {

	NSString* _baseDomain;
	NSString* _filesystemBaseDir;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _delegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _waitedOperationQueue;

}

@property (nonatomic,retain) NSString * baseDomain;                                             //@synthesize baseDomain=_baseDomain - In the implementation block
@property (nonatomic,retain) NSString * filesystemBaseDir;                                      //@synthesize filesystemBaseDir=_filesystemBaseDir - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                    //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue;              //@synthesize delegateCallbackQueue=_delegateCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> waitedOperationQueue;               //@synthesize waitedOperationQueue=_waitedOperationQueue - In the implementation block
+(char)objectIsEqual:(id)arg1 to:(id)arg2 ;
+(id)getFileMetadata:(const char*)arg1 forKey:(id)arg2 ;
+(char)setFileMetadata:(const char*)arg1 forKey:(id)arg2 value:(id)arg3 ;
+(char)dateIsEqual:(id)arg1 to:(id)arg2 ;
+(id)beginTransactionWithName:(id)arg1 ;
+(void)endTransaction:(id)arg1 withName:(id)arg2 ;
+(char)numberIsEqual:(id)arg1 to:(id)arg2 ;
+(char)stringIsEqual:(id)arg1 to:(id)arg2 ;
+(id)limitString:(id)arg1 toMaxLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3 ;
+(id)sharedSUCoreDomainAppending:(id)arg1 ;
+(char)dataIsEqual:(id)arg1 to:(id)arg2 ;
+(char)dictionaryIsEqual:(id)arg1 to:(id)arg2 ;
+(char)arrayIsEqual:(id)arg1 to:(id)arg2 ;
+(id)stringFromDate:(id)arg1 ;
+(id)sharedCore;
+(id)errorNameForCode:(long long)arg1 ;
-(void)useDomain:(id)arg1 ;
-(id)commonFilesystemBaseDir;
-(void)setFilesystemBaseDir:(NSString *)arg1 ;
-(NSString *)filesystemBaseDir;
-(void)useFilesystemBaseDir:(id)arg1 ;
-(id)buildError:(long long)arg1 underlying:(id)arg2 description:(id)arg3 ;
-(id)selectCompletionQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)waitedOperationQueue;
-(id)commonDomain;
-(id)selectDelegateCallbackQueue:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setBaseDomain:(NSString *)arg1 ;
-(NSString *)baseDomain;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
@end

