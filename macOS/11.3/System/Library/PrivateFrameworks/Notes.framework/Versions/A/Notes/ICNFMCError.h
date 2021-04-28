/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Foundation/NSError.h>
#import <libobjc.A.dylib/NSAlertDelegate.h>

@class NSMutableDictionary, NSString;

@interface ICNFMCError : NSError <NSAlertDelegate> {

	NSMutableDictionary* _moreUserInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 helpTag:(id)arg5 userInfo:(id)arg6 ;
+(id)errorWithException:(id)arg1 ;
+(id)messageTraceableStringForError:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescription;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithError:(id)arg1 ;
-(id)helpAnchor;
-(void)setLocalizedDescription:(id)arg1 ;
-(char)alertShowHelp:(id)arg1 ;
-(void)setShortDescription:(id)arg1 ;
-(void)useGenericDescription:(id)arg1 ;
-(void)setMoreInfo:(id)arg1 ;
-(void)setHelpTag:(id)arg1 ;
-(id)ic_moreInfo;
-(id)ic_shortDescription;
@end

