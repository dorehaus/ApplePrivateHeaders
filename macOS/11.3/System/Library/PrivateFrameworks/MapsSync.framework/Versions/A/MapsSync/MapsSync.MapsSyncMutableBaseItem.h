/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSManagedObject, NSUUID, NSDate;

@interface MapsSync.MapsSyncMutableBaseItem : NSObject {

	 _proxyObject;

}

@property (readonly,nonatomic) NSManagedObjectContext * context; 
@property (readonly,nonatomic) NSManagedObject * proxyObject; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * createTime; 
@property (assign,nonatomic) long long positionIndex; 
-(id)init;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSManagedObjectContext *)context;
-(NSDate *)createTime;
-(void)setCreateTime:(NSDate *)arg1 ;
-(NSManagedObject *)proxyObject;
-(void)setPositionIndex:(long long)arg1 ;
-(long long)positionIndex;
-(id)initWithProxyObject:(id)arg1 ;
@end

