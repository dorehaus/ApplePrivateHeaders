/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASBContainerAction : NSObject
+(id)actionMoveFrom:(id)arg1 to:(id)arg2 ;
+(id)actionMoveContentsOf:(id)arg1 to:(id)arg2 ;
+(id)actionSymlinkTo:(id)arg1 as:(id)arg2 ;
+(id)actionUnlink:(id)arg1 ;
+(id)actionWithName:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(char)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
-(id)description;
@end
