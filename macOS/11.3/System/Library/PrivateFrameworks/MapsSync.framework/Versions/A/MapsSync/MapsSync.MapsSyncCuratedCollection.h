/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSString;

@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {

	 _curatedCollectionIdentifier;
	 _resultProviderIdentifier;

}

@property (readonly,nonatomic) long long identifierHash; 
@property (readonly,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (readonly,nonatomic) int resultProviderIdentifier; 
@property (readonly,nonatomic) NSString * description; 
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(int)resultProviderIdentifier;
-(Class)managedObjectClass;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 ;
-(unsigned long long)curatedCollectionIdentifier;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(long long)identifierHash;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
@end

