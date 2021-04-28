/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSImage, NSString, CBIdentity, ABPerson;

@interface ListObject : NSObject {

	NSImage* _icon;
	NSString* _displayName;
	NSString* _realName;
	CBIdentity* _identity;
	ABPerson* _person;

}
+(id)listObjectWithDisplayName:(id)arg1 realName:(id)arg2 icon:(id)arg3 ;
+(id)listObjectWithIdentity:(id)arg1 ;
+(id)listObjectWithPerson:(id)arg1 ;
-(void)dealloc;
-(id)displayName;
-(id)person;
-(id)initWithIdentity:(id)arg1 ;
-(id)icon;
-(id)initWithPerson:(id)arg1 ;
-(id)realName;
-(id)cbIdentity;
-(id)initWithDisplayName:(id)arg1 realName:(id)arg2 icon:(id)arg3 ;
@end

