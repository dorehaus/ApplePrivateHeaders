/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSMutableArray, NSString, NSMutableSet, PHPerson, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSDictionary, NSManagedObjectID;

@interface PHPersonChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	NSMutableArray* _personUUIDsToMerge;
	NSString* _nominalMergeTargetUUID;
	NSMutableSet* _faceUUIDsRequiringFaceCropGeneration;
	NSMutableSet* _rejectedMergeCandidatePersonUUIDs;
	NSMutableSet* _graphDedupePersonUUIDs;
	PHPerson* _targetPerson;
	NSString* _identifier;
	PHRelationshipChangeRequestHelper* _facesHelper;
	PHRelationshipChangeRequestHelper* _keyFaceHelper;
	PHRelationshipChangeRequestHelper* _rejectedFacesHelper;
	PHRelationshipChangeRequestHelper* _mergeCandidatesHelper;
	PHRelationshipChangeRequestHelper* _invalidMergeCandidatesHelper;

}

@property (assign,nonatomic) short keyFacePickSource; 
@property (assign,nonatomic) unsigned short suggestedForClientType; 
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;                               //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyFaceHelper;                             //@synthesize keyFaceHelper=_keyFaceHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * rejectedFacesHelper;                       //@synthesize rejectedFacesHelper=_rejectedFacesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * mergeCandidatesHelper;                     //@synthesize mergeCandidatesHelper=_mergeCandidatesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * invalidMergeCandidatesHelper;              //@synthesize invalidMergeCandidatesHelper=_invalidMergeCandidatesHelper - In the implementation block
@property (nonatomic,retain) PHPerson * targetPerson;                                                         //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedPerson; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) unsigned long long manualOrder; 
@property (nonatomic,copy) NSString * personUri; 
@property (assign,getter=isInPersonNamingModel,nonatomic) char inPersonNamingModel; 
@property (assign,getter=isVerified,nonatomic) char verified; 
@property (assign,nonatomic) long long verifiedType; 
@property (assign,nonatomic) unsigned short questionType; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short sexType; 
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (readonly) char isNewRequest; 
@property (assign,nonatomic) char shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) char mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) char clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestForPerson;
+(id)changeRequestForPerson:(id)arg1 ;
+(void)deletePersons:(id)arg1 ;
+(id)changeRequestForMergingPersons:(id)arg1 ;
+(id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2 ;
+(id)changeRequestsForMergeCandidatePersons:(id)arg1 ;
+(id)changeRequestForDedupingGraphPersons:(id)arg1 ;
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)isVerified;
-(void)setVerified:(char)arg1 ;
-(unsigned short)questionType;
-(void)setQuestionType:(unsigned short)arg1 ;
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(char)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_existentFaceObjectIDs;
-(void)_prepareKeyFaceHelperIfNeeded;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(void)addFaces:(id)arg1 ;
-(void)removeFaces:(id)arg1 ;
-(void)setKeyFace:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(PHRelationshipChangeRequestHelper *)keyFaceHelper;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(unsigned short)ageType;
-(void)setAgeType:(unsigned short)arg1 ;
-(unsigned short)genderType;
-(void)setGenderType:(unsigned short)arg1 ;
-(unsigned short)sexType;
-(void)setSexType:(unsigned short)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedPerson;
-(unsigned long long)manualOrder;
-(void)setManualOrder:(unsigned long long)arg1 ;
-(id)personUUID;
-(void)setPersonUUID:(id)arg1 ;
-(NSString *)personUri;
-(void)setPersonUri:(NSString *)arg1 ;
-(char)isInPersonNamingModel;
-(void)setInPersonNamingModel:(char)arg1 ;
-(long long)verifiedType;
-(void)setVerifiedType:(long long)arg1 ;
-(NSDictionary *)contactMatchingDictionary;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(short)keyFacePickSource;
-(void)setKeyFacePickSource:(short)arg1 ;
-(unsigned short)suggestedForClientType;
-(void)setSuggestedForClientType:(unsigned short)arg1 ;
-(char)_containsUserMutations;
-(char)_hasMutationForVerifiedType:(int*)arg1 ;
-(char)_shouldPromotePerson:(id)arg1 toVerifiedType:(int*)arg2 ;
-(id)_existentRejectedFaceObjectIDs;
-(id)_noMinimumFaceCountPersonFetchOptions;
-(id)_existentMergeCandidateObjectIDs;
-(id)_existentInvalidMergeCandidateObjectIDs;
-(id)_mutableRejectedFacesObjectIDsAndUUIDs;
-(id)_mutableMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableRequiringFaceCropGenerationFacesUUIDs;
-(void)_setKeyFace:(id)arg1 forCluster:(char)arg2 pickSource:(short)arg3 ;
-(void)setKeyFaceForUserPick:(id)arg1 ;
-(void)setKeyFaceForUserPick:(id)arg1 forCluster:(char)arg2 ;
-(void)setKeyFace:(id)arg1 forCluster:(char)arg2 ;
-(void)addRejectedFaces:(id)arg1 forCluster:(char)arg2 ;
-(void)addRejectedFaces:(id)arg1 ;
-(void)removeRejectedFaces:(id)arg1 ;
-(void)persistSuggestionForClient:(unsigned long long)arg1 ;
-(void)_setNominalMergeTargetUUID:(id)arg1 ;
-(void)mergePersons:(id)arg1 ;
-(void)addMergeCandidatePersons:(id)arg1 ;
-(void)removeMergeCandidatePersons:(id)arg1 ;
-(void)rejectMergeCandidatePersons:(id)arg1 ;
-(void)addInvalidMergeCandidatePersons:(id)arg1 ;
-(void)_setGraphDedupePersons:(id)arg1 ;
-(PHPerson *)targetPerson;
-(void)setTargetPerson:(PHPerson *)arg1 ;
-(PHRelationshipChangeRequestHelper *)rejectedFacesHelper;
-(PHRelationshipChangeRequestHelper *)mergeCandidatesHelper;
-(PHRelationshipChangeRequestHelper *)invalidMergeCandidatesHelper;
@end

