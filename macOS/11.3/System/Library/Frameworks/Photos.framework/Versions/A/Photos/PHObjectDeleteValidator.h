/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

@interface PHObjectDeleteValidator : NSObject {

	NSMutableSet* _deletedObjectIDs;
	NSEntityDescription* _entity;
	NSManagedObjectContext* _context;

}
-(id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2 ;
-(char)recordObjectID:(id)arg1 ;
-(char)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2 ;
@end

