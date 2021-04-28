/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSPredicate, NSDictionary, NSString, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	id _entity;
	NSPredicate* _predicate;
	struct {
		unsigned includesSubentities : 1;
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 27;
	}  _flags;
	NSDictionary* _columnsToUpdate;

}

@property (assign,setter=_setSecureOperation:,getter=_secureOperation,nonatomic) char shouldPerformSecureOperation; 
@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity;                                                                               //@synthesize entity=_entity - In the implementation block
@property (retain) NSPredicate * predicate;                                                                                      //@synthesize predicate=_predicate - In the implementation block
@property (assign) char includesSubentities; 
@property (assign) unsigned long long resultType; 
@property (copy) NSDictionary * propertiesToUpdate;                                                                              //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)batchUpdateRequestWithEntityName:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)_setSecureOperation:(char)arg1 ;
-(char)shouldPerformSecureOperation;
-(char)_secureOperation;
-(id)encodeForXPC;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSString *)entityName;
-(unsigned long long)resultType;
-(NSDictionary *)propertiesToUpdate;
-(NSEntityDescription *)entity;
-(void)setResultType:(unsigned long long)arg1 ;
-(id)initWithEntityName:(id)arg1 ;
-(void)setIncludesSubentities:(char)arg1 ;
-(unsigned long long)requestType;
-(id)initWithEntity:(id)arg1 ;
-(void)setPropertiesToUpdate:(NSDictionary *)arg1 ;
-(char)includesSubentities;
-(void)setShouldPerformSecureOperation:(char)arg1 ;
@end

