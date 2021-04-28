/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary, ISyncConcreteSession;

@interface RelationshipInformation : NSObject {

	NSString* _entityName;
	NSString* _relationship;
	NSArray* _legalTypes;
	NSMutableDictionary* _typeMap;
	ISyncConcreteSession* _session;
	NSMutableDictionary* _modsToCheckPerRecord;

}
-(void)dealloc;
-(id)_entityName;
-(id)_relationshipName;
-(id)initWithName:(id)arg1 forEntity:(id)arg2 inSession:(id)arg3 ;
-(void)setReferencesToCheck:(id)arg1 forRecord:(id)arg2 ;
-(id)_referencesToCheck;
-(void)validateReferences:(id)arg1 ;
-(id)allUnknownReferences;
@end

