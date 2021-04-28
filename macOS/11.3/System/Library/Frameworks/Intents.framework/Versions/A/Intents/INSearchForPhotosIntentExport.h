/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INSearchForPhotosIntentExport <NSObject,JSExport>
@property (copy) INDateComponentsRange * dateCreated; 
@property (copy) CLPlacemark * locationCreated; 
@property (copy) NSString * albumName; 
@property (copy) NSArray * searchTerms; 
@property (assign) unsigned long long includedAttributes; 
@property (assign) unsigned long long excludedAttributes; 
@property (copy) NSArray * peopleInPhoto; 
@property (copy) NSArray * events; 
@property (readonly) long long eventsOperator; 
@property (copy) NSArray * places; 
@property (readonly) long long placesOperator; 
@property (copy) NSArray * activities; 
@property (readonly) long long activitiesOperator; 
@property (copy) NSArray * geographicalFeatures; 
@property (readonly) long long geographicalFeaturesOperator; 
@property (copy) NSString * memoryName; 
@required
-(id)init;
-(NSArray *)events;
-(NSArray *)activities;
-(void)setEvents:(id)arg1;
-(INDateComponentsRange *)dateCreated;
-(NSArray *)places;
-(void)setPlaces:(id)arg1;
-(void)setActivities:(id)arg1;
-(void)setDateCreated:(id)arg1;
-(NSString *)albumName;
-(void)setAlbumName:(id)arg1;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(id)arg1;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(id)arg1;
-(NSString *)memoryName;
-(void)setMemoryName:(id)arg1;
-(long long)eventsOperator;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;

@end

