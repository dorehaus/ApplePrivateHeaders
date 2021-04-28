/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EFSQLQueryGenerator : NSObject
+(id)traverseKeypath:(id)arg1 keyPropertyMapper:(id)arg2 previousExpressionGenerator:(id)arg3 ;
+(id)selectExpressionGeneratorForReturnObjectKeypath:(id)arg1 propertyMapper:(id)arg2 ;
+(id)expressionGeneratorsForSortDescriptors:(id)arg1 propertyMapper:(id)arg2 ;
+(id)compiledSQLQueryWithPredicateNodes:(id)arg1 selectGenerators:(id)arg2 orderByGenerators:(id)arg3 selectAll:(char)arg4 ;
+(id)getChildrenFromPropertyMapper:(id)arg1 previousTable:(id)arg2 previousExpressionGenerator:(id)arg3 ;
+(id)sqlQueryForReturnObjectKeypaths:(id)arg1 query:(id)arg2 propertyMapper:(id)arg3 ;
@end

