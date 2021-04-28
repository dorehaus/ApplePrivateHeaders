/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSString, NSData, NSDate, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncCachedCuratedCollection : MapsSync.MapsSyncBaseItem {

	 _collectionDescription;
	 _image;
	 _imageUrl;
	 _title;
	 _curatedCollectionIdentifier;
	 _isTombstone;
	??? _lastFetchedDate;
	??? _lastSignificantChangeDate;
	 _placesCount;
	 _publisherAttribution;
	 _titleLocale;
	 _resultProviderIdentifier;

}

@property (readonly,nonatomic) long long identifierHash; 
@property (readonly,nonatomic) NSString * collectionDescription; 
@property (readonly,nonatomic) NSData * image; 
@property (readonly,nonatomic) NSString * imageUrl; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (readonly,nonatomic) char isTombstone; 
@property (readonly,nonatomic) NSDate * lastFetchedDate; 
@property (readonly,nonatomic) NSDate * lastSignificantChangeDate; 
@property (readonly,nonatomic) int placesCount; 
@property (readonly,nonatomic) NSString * publisherAttribution; 
@property (readonly,nonatomic) NSString * titleLocale; 
@property (readonly,nonatomic) int resultProviderIdentifier; 
@property (readonly,nonatomic) _TtC8MapsSync19MapsSyncDataSession * session; 
@property (readonly,nonatomic) NSString * description; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(char)arg5 completion:(/*^block*/id)arg6 ;
+(void)fetchWithCuratedCollections:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)fetchWithCuratedCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(NSString *)title;
-(NSData *)image;
-(_TtC8MapsSync19MapsSyncDataSession *)session;
-(NSString *)collectionDescription;
-(NSString *)publisherAttribution;
-(NSString *)imageUrl;
-(int)placesCount;
-(int)resultProviderIdentifier;
-(Class)managedObjectClass;
-(char)isTombstone;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 ;
-(unsigned long long)curatedCollectionIdentifier;
-(NSDate *)lastFetchedDate;
-(NSDate *)lastSignificantChangeDate;
-(NSString *)titleLocale;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(long long)identifierHash;
@end
