/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@class NSString;

@interface AdminDirectoryService : NSObject {

	unsigned mDirReference;
	NSString* mNameOfDefaultLocalNode;
	NSString* mNameOfSearchNode;

}
+(unsigned)sharedSession;
+(id)sharedDirectoryService;
+(id)directoryServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4 ;
+(unsigned)dirReferenceForServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4 ;
-(id)nameOfNodeWithName:(SCD_Struct_Ad7*)arg1 patternMatch:(int)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)open;
-(void)close;
-(char)isOpen;
-(unsigned)session;
-(id)nameOfDefaultLocalNode;
-(id)nameOfSearchNode;
-(id)namesOfNodeWithName:(SCD_Struct_Ad7*)arg1 patternMatch:(int)arg2 ;
-(id)initWithDirectoryServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4 ;
@end

