/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate {

	ML3Predicate* _conditionPredicate;
	ML3Predicate* _thenPredicate;
	ML3Predicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) ML3Predicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) ML3Predicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) ML3Predicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
+(char)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(ML3Predicate *)conditionPredicate;
-(ML3Predicate *)thenPredicate;
-(ML3Predicate *)elsePredicate;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(char)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
@end

