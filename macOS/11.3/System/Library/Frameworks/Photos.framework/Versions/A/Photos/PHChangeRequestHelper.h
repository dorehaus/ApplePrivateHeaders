/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLClientAuthorization, PHChangeRequest;
@class NSMutableDictionary, NSMutableSet, PHPerformChangesRequest, NSString, NSManagedObjectID;

@interface PHChangeRequestHelper : NSObject {

	char _isMutated;
	char _isNewRequest;
	NSMutableDictionary* _mutations;
	NSMutableSet* _nilMutations;
	id<PLClientAuthorization> _clientAuthorization;
	id<PHChangeRequest> _changeRequest;
	PHPerformChangesRequest* _request;
	NSString* _uuid;
	NSManagedObjectID* _objectID;

}

@property (assign,nonatomic,__weak) id<PHChangeRequest> changeRequest;                                           //@synthesize changeRequest=_changeRequest - In the implementation block
@property (assign,nonatomic) PHPerformChangesRequest * request;                                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                                                       //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;                                                  //@synthesize mutations=_mutations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * nilMutations;                                                      //@synthesize nilMutations=_nilMutations - In the implementation block
@property (assign,getter=isNewRequest,nonatomic) char newRequest; 
@property (assign,getter=isMutated,nonatomic) char mutated; 
@property (nonatomic,readonly) NSString * clientDisplayName; 
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,readonly) NSString * fetchFilterIdentifier; 
@property (nonatomic,readonly) id<PLClientAuthorization> clientAuthorization;                                    //@synthesize clientAuthorization=_clientAuthorization - In the implementation block
@property (getter=isClientEntitled,nonatomic,readonly) char clientEntitled; 
@property (getter=isClientInLimitedLibraryMode,nonatomic,readonly) char clientInLimitedLibraryMode; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)description;
-(id)init;
-(NSString *)uuid;
-(PHPerformChangesRequest *)request;
-(NSMutableDictionary *)mutations;
-(NSManagedObjectID *)objectID;
-(void)setRequest:(PHPerformChangesRequest *)arg1 ;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(void)setChangeRequest:(id<PHChangeRequest>)arg1 ;
-(char)isNewRequest;
-(id<PHChangeRequest>)changeRequest;
-(NSString *)clientBundleIdentifier;
-(char)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(char)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(char)isMutated;
-(void)encodeToXPCDict:(id)arg1 ;
-(char)prepareForServicePreflightCheck:(id*)arg1 ;
-(char)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(char)isClientEntitled;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 isNew:(char)arg3 changeRequest:(id)arg4 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 request:(id)arg3 clientAuthorization:(id)arg4 ;
-(id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2 ;
-(void)didMutate;
-(void)setMutated:(char)arg1 ;
-(void)setNewRequest:(char)arg1 ;
-(char)isClientInLimitedLibraryMode;
-(NSString *)clientDisplayName;
-(NSString *)fetchFilterIdentifier;
-(NSMutableSet *)nilMutations;
-(id<PLClientAuthorization>)clientAuthorization;
@end

