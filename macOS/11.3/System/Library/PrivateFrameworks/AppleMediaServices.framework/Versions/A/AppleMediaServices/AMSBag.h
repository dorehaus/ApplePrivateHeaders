/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@protocol AMSBagDataSourceProtocol;
@class NSDate, NSString, AMSProcessInfo;

@interface AMSBag : NSObject <AMSBagProtocol> {

	id<AMSBagDataSourceProtocol> _dataSource;

}

@property (retain) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSString * descriptionExtended; 
@property (getter=isExpired,readonly) char expired; 
@property (readonly) NSDate * expirationDate; 
@property (copy,readonly) NSString * profile; 
@property (copy,readonly) NSString * profileVersion; 
@property (copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)amsui_internalBag;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 ;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
+(id)bagCacheAccessQueue;
+(id)bagCache;
+(void)_resetBagCache;
-(NSString *)description;
-(id)boolForKey:(id)arg1 ;
-(AMSProcessInfo *)processInfo;
-(id)URLForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(char)isLoaded;
-(id)doubleForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(char)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(NSString *)descriptionExtended;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)URLForKey:(id)arg1 account:(id)arg2 ;
@end
