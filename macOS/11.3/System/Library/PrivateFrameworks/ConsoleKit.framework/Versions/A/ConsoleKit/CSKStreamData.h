/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSKStreamDataDelegate;
#import <ConsoleKit/ConsoleKit-Structs.h>
@class CSKEntity, CSKStreamSortedData;

@interface CSKStreamData : NSObject {

	id<CSKStreamDataDelegate> _delegate;
	unsigned long long _capacity;
	unsigned long long _direction;
	CSKEntity* _keyEntity;
	CSKStreamSortedData* _sortedData;
	unsigned long long _objectsCount;

}

@property (nonatomic,readonly) CSKStreamSortedData * sortedData;                     //@synthesize sortedData=_sortedData - In the implementation block
@property (assign,nonatomic) unsigned long long objectsCount;                        //@synthesize objectsCount=_objectsCount - In the implementation block
@property (assign,nonatomic,__weak) id<CSKStreamDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long capacity;                            //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                           //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic,__weak) CSKEntity * keyEntity;                           //@synthesize keyEntity=_keyEntity - In the implementation block
-(id)debugDescription;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id<CSKStreamDataDelegate>)delegate;
-(void)setDelegate:(id<CSKStreamDataDelegate>)arg1 ;
-(unsigned long long)capacity;
-(unsigned long long)direction;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)allMessages;
-(id)allActivities;
-(void)setKeyEntity:(CSKEntity *)arg1 ;
-(CSKEntity *)keyEntity;
-(void)removeEntitiesCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)addEntities:(id)arg1 direction:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(char)_isCapacityReached;
-(CSKStreamSortedData *)sortedData;
-(id)_keyEntityFromMessages:(id)arg1 activities:(id)arg2 direction:(unsigned long long)arg3 ;
-(unsigned long long)objectsCount;
-(void)setObjectsCount:(unsigned long long)arg1 ;
-(Class)_sortedDataEntityClassEligibleForRemoval;
-(id)_popMessagesFromSortedData:(unsigned long long)arg1 direction:(unsigned long long)arg2 ;
-(id)_removeFromSortedDataActivitiesRelatedToMessages:(id)arg1 ;
-(id)_popActivitiesFromSortedData:(unsigned long long)arg1 direction:(unsigned long long)arg2 ;
-(id)_removeFromSortedDataMessagesRelatedToActivities:(id)arg1 ;
-(NSRange)_rangeForListCount:(unsigned long long)arg1 targetCount:(unsigned long long)arg2 direction:(unsigned long long)arg3 ;
@end

