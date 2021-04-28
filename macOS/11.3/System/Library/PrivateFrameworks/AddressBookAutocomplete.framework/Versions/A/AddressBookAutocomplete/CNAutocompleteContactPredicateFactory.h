/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookAutocomplete.framework/Versions/A/AddressBookAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNAutocompleteContactPredicateFactory : NSObject {

	NSArray* _terms;
	NSDictionary* _propertyMap;
	NSArray* _properties;

}
+(id)predicateForProperties:(id)arg1 term:(id)arg2 ;
+(id)predicateForProperties:(id)arg1 terms:(id)arg2 ;
+(id)factoryWithTerms:(id)arg1 properties:(id)arg2 ;
+(id)contactPropertyMap;
+(id)contactIsPersonPredicate;
+(id)contactIsCompanyPredicate;
+(void)separateKeyPath:(id)arg1 intoKey:(id*)arg2 valueKeyPath:(id*)arg3 ;
-(id)makePredicate;
-(id)initWithTerms:(id)arg1 properties:(id)arg2 propertyMap:(id)arg3 ;
-(id)makePredicateForTerm:(id)arg1 ;
-(id)propertyPredicatesForTerm:(id)arg1 ;
-(id)makeNamePredicatesForTerm:(id)arg1 ;
-(void)addPredicateForTerm:(id)arg1 property:(id)arg2 toCollection:(id)arg3 ;
-(id)makePersonNamePredicateForTerm:(id)arg1 ;
-(id)makeCompanyNamePredicateForTerm:(id)arg1 ;
-(id)makeNamePredicateForTerm:(id)arg1 properties:(id)arg2 personOrCompanyQualifyingPredicate:(id)arg3 ;
-(id)makePredicateForTerm:(id)arg1 property:(id)arg2 ;
-(id)makePredicateForValue:(id)arg1 key:(id)arg2 ;
-(id)makePredicateForValue:(id)arg1 relationshipKey:(id)arg2 valueKeyPath:(id)arg3 ;
@end

