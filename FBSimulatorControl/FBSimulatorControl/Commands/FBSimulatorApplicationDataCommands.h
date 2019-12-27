/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBControlCore/FBControlCore.h>

NS_ASSUME_NONNULL_BEGIN

@class FBSimulator;

/**
 An implementation of FBApplicationDataCommands for Simulators
 */
@interface FBSimulatorApplicationDataCommands : NSObject <FBApplicationDataCommands, FBiOSTargetCommand>

@end

NS_ASSUME_NONNULL_END
