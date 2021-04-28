/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	char _disambiguationKeypathHasToMany;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(char)disambiguationKeypathHasToMany;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(char)arg3 ;
-(id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

