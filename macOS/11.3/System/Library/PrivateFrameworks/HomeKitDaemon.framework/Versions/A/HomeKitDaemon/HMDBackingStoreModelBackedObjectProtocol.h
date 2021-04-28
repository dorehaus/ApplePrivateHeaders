/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@optional
-(char)isBackingStorageEqual:(id)arg1;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;

@required
-(NSUUID *)modelIdentifier;
-(Class)modelClass;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@end

