/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject {

	AnalyticsStoreMOContext* _storeMOContext;

}

@property (nonatomic,retain) AnalyticsStoreMOContext * storeMOContext;              //@synthesize storeMOContext=_storeMOContext - In the implementation block
-(id)initWithType:(unsigned long long)arg1 ;
-(id)managedObjectContext;
-(void)performBlockOnManagedObjectContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)networkManagedObject:(id)arg1 created:(char*)arg2 ;
-(char)removeNetwork:(id)arg1 ;
-(void)updateManagedObjectContextWithoutSave;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 ;
-(id)mostRecentJoinMO:(id)arg1 ssid:(id)arg2 ;
-(id)roamManagedObject;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 created:(char*)arg3 ;
-(id)networkManagedObject:(id)arg1 ;
-(id)joinManagedObject;
-(id)leaveManagedObject;
-(char)setNetworkManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)geotagManagedObject;
-(void)ageOutManagedObjectsOlderThan:(double)arg1 ;
-(void)performPruneBasedOnStoreSize;
-(AnalyticsStoreMOContext *)storeMOContext;
-(void)saveManagedObjectContext;
-(id)fetchRequestForEntity:(id)arg1 ;
-(id)fetch:(id)arg1 withPredicate:(id)arg2 ;
-(unsigned long long)entityCount:(id)arg1 withPredicate:(id)arg2 ;
-(id)createEntity:(id)arg1 ;
-(id)analyticsStoreEntitiesWithDate;
-(void)pruneManagedObjects;
-(id)analyticsStoreEntityNames;
-(char)batchDelete:(id)arg1 withPredicate:(id)arg2 withFetchRequest:(id)arg3 ;
-(id)predicateForEntityWithAgeOlderThan:(id)arg1 dateAttribute:(id)arg2 olderThan:(double)arg3 ;
-(id)entityByCounting:(id)arg1 withPredicate:(id)arg2 created:(char*)arg3 ;
-(id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg1 properties:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptor:(id)arg5 returnDistinct:(char)arg6 ;
-(id)getDeploymentUuidForBssids:(id)arg1 ;
-(char)batchUpdate:(id)arg1 withPredicate:(id)arg2 propertiesToUpdate:(id)arg3 ;
-(id)fetchPropertiesForEntity:(id)arg1 properties:(id)arg2 predicate:(id)arg3 ;
-(id)fetchAll:(id)arg1 ;
-(id)entity:(id)arg1 withPredicate:(id)arg2 created:(char*)arg3 ;
-(id)fetchRequestForEntityWithOffset:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)predicateForEntityWithAge:(id)arg1 maxAge:(unsigned long long)arg2 ;
-(id)analyticsStoreEntityRelationshipNames;
-(id)allBssidsForSsid:(id)arg1 ;
-(id)allSsidsForBssid:(id)arg1 ;
-(id)fetchRoamProperties:(id)arg1 fetchLimit:(unsigned long long)arg2 properties:(id)arg3 ;
-(unsigned long long)roamsCount:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchRoamObjects:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchRoamCache:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)earliestJoinDate:(id)arg1 ;
-(id)bssManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(char)setBssManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)networkManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(char)coalesceBssidsIntoDeployment:(id)arg1 ;
-(void)setStoreMOContext:(AnalyticsStoreMOContext *)arg1 ;
@end

