/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBControlCore/FBTask.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Builds on top of the FBTask API
 */
@interface FBTask (Helpers)

/**
 A mechanism for sending an signal to a task, backing off to a kill.
 If the process does not die before the timeout is hit, a SIGKILL will be sent.

 @param signo the signal number to send.
 @param timeout the timeout to wait before sending a SIGKILL.
 @return a future that resolves to the signal sent when the process has been terminated.
 */
- (FBFuture<NSNumber *> *)sendSignal:(int)signo backingOffToKillWithTimeout:(NSTimeInterval)timeout;

@end

NS_ASSUME_NONNULL_END
