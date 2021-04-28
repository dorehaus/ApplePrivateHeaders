/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStructurePort, QCNumberPort, QCIndexPort, QCOpenGLPort_Image, QCMeshPort;

@interface QCMeshCreator : QCPatch {

	QCStructurePort* inputVertices;
	QCStructurePort* _inputColors;
	QCStructurePort* _inputNormals;
	QCStructurePort* _inputIndices;
	QCStructurePort* _inputTexcoords;
	QCNumberPort* _inputPointSize;
	QCIndexPort* _inputSliceWidth;
	QCIndexPort* _inputSliceHeight;
	QCIndexPort* _inputSliceDepth;
	QCStructurePort* _inputVolume;
	QCOpenGLPort_Image* _inputTextures[16];
	QCMeshPort* outputMesh;
	int _mode;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
-(id)state;
-(void)setMode:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_forwardRenderingFlag;
@end

