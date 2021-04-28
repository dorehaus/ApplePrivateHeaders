/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {

	NSString* _destinationEntityExternalName;
	NSArray* _foreignKeys;
	NSArray* _joins;
	unsigned _joinSemantic;

}
-(id)constraintDefinitions;
-(void)setDestinationEntityExternalName:(id)arg1 ;
-(void)setForeignKeys:(id)arg1 ;
-(void)setJoins:(id)arg1 ;
-(id)destinationEntityExternalName;
-(id)foreignKeys;
-(unsigned)joinSemantic;
-(void)setJoinSemantic:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)relationship;
-(id)columnDefinitions;
-(id)joins;
@end

