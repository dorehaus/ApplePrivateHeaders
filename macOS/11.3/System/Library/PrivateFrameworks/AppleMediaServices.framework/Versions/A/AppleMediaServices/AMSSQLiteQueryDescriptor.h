/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, AMSSQLitePredicate;

@interface AMSSQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	long long _limitCount;
	Class _memoryEntityClass;
	NSString* _orderingClause;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	AMSSQLitePredicate* _predicate;
	char _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) Class memoryEntityClass;                   //@synthesize memoryEntityClass=_memoryEntityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                      //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSString * orderingClause;                   //@synthesize orderingClause=_orderingClause - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) char returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) AMSSQLitePredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(AMSSQLitePredicate *)predicate;
-(void)setPredicate:(AMSSQLitePredicate *)arg1 ;
-(Class)entityClass;
-(Class)memoryEntityClass;
-(long long)limitCount;
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(void)setEntityClass:(Class)arg1 ;
-(void)setMemoryEntityClass:(Class)arg1 ;
-(void)setLimitCount:(long long)arg1 ;
-(NSString *)orderingClause;
-(void)setOrderingClause:(NSString *)arg1 ;
-(NSArray *)orderingDirections;
-(NSArray *)orderingProperties;
-(char)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(char)arg1 ;
@end

