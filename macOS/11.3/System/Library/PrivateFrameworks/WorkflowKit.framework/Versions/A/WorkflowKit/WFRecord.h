/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableSet, NSMutableDictionary, NSString, NSSet;

@interface WFRecord : NSObject <NSCopying> {

	NSDictionary* _allPropertiesByName;
	NSMutableSet* _fetchedPropertyNames;
	NSMutableSet* _modifiedPropertyNames;
	NSMutableDictionary* _lastFetchedValues;
	NSMutableSet* _modifiedPropertyNamesSinceLastSave;
	NSMutableDictionary* _lastSavedOrFetchedValues;
	NSString* _storageIdentifier;

}

@property (nonatomic,readonly) NSDictionary * allPropertiesByName;                             //@synthesize allPropertiesByName=_allPropertiesByName - In the implementation block
@property (nonatomic,readonly) NSMutableSet * fetchedPropertyNames;                            //@synthesize fetchedPropertyNames=_fetchedPropertyNames - In the implementation block
@property (nonatomic,readonly) NSMutableSet * modifiedPropertyNames;                           //@synthesize modifiedPropertyNames=_modifiedPropertyNames - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastFetchedValues;                        //@synthesize lastFetchedValues=_lastFetchedValues - In the implementation block
@property (nonatomic,readonly) NSMutableSet * modifiedPropertyNamesSinceLastSave;              //@synthesize modifiedPropertyNamesSinceLastSave=_modifiedPropertyNamesSinceLastSave - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastSavedOrFetchedValues;                 //@synthesize lastSavedOrFetchedValues=_lastSavedOrFetchedValues - In the implementation block
@property (nonatomic,copy) NSString * storageIdentifier;                                       //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * allProperties; 
@property (nonatomic,readonly) NSSet * fetchedProperties; 
@property (nonatomic,readonly) NSSet * modifiedPropertiesSinceLastSave; 
@property (nonatomic,readonly) NSSet * modifiedProperties; 
+(id)propertiesForClass:(Class)arg1 ;
+(id)defaultPropertyValues;
+(id)propertiesForClass:(Class)arg1 walkingSuperclassesUntilReaching:(Class)arg2 ;
+(id)recordSubclassProperties;
+(id)ignoredPropertyNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)allProperties;
-(id)initWithStorage:(id)arg1 ;
-(NSString *)storageIdentifier;
-(void)setStorageIdentifier:(NSString *)arg1 ;
-(NSDictionary *)allPropertiesByName;
-(id)initWithStorage:(id)arg1 properties:(id)arg2 ;
-(NSSet *)fetchedProperties;
-(NSSet *)modifiedPropertiesSinceLastSave;
-(NSSet *)modifiedProperties;
-(void)loadFromStorage:(id)arg1 ;
-(void)loadFromStorage:(id)arg1 properties:(id)arg2 ;
-(char)saveChangesToStorage:(id)arg1 error:(id*)arg2 ;
-(char)writeToStorage:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithValues:(char)arg1 ;
-(void)markPropertyModifiedIfNecessary:(id)arg1 ;
-(void)resetModifications:(char)arg1 ;
-(char)saveProperties:(id)arg1 toStorage:(id)arg2 error:(id*)arg3 ;
-(void)enumerateSettablePropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)setupPropertyObservation;
-(void)tearDownPropertyObservation;
-(NSMutableSet *)fetchedPropertyNames;
-(NSMutableSet *)modifiedPropertyNames;
-(NSMutableDictionary *)lastFetchedValues;
-(NSMutableSet *)modifiedPropertyNamesSinceLastSave;
-(NSMutableDictionary *)lastSavedOrFetchedValues;
@end

